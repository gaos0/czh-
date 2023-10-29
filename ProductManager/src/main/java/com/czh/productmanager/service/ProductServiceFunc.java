package com.czh.productmanager.service;


import com.czh.productmanager.mapper.ProductMapper;
import com.czh.productmanager.pojo.Product;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
@Slf4j
public class ProductServiceFunc implements ProductService{

    @Autowired
    private ProductMapper productMapper;
    @Override
    public List<Product> list() {
        List<Product> productList = productMapper.list();
        return productList;
    }

    @Override
    public void delete(Integer id) {
        productMapper.delete(id);
    }


    @Override
    public void add(Product product) {
        productMapper.add(product.getProductName(),product.getProductKindId(),product.getPrice());
    }

    @Override
    public List<Product> findByName(String productName) {
        return productMapper.findByName(productName);
    }

    @Override
    public void update(Product product) {
        productMapper.update(product.getId(),product.getProductName(),product.getProductKindId(),product.getPrice());
    }
}
