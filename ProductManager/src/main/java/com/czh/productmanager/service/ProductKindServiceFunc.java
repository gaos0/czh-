package com.czh.productmanager.service;


import com.czh.productmanager.mapper.ProductKindMapper;
import com.czh.productmanager.pojo.ProductKind;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
@Slf4j
public class ProductKindServiceFunc implements ProductKIndService{
    @Autowired
    private ProductKindMapper productKindMapper;

    @Override
    public List<ProductKind> list() {
        List<ProductKind> kindList = productKindMapper.list();
        return kindList;
    }

    @Override
    public void delete(Integer id) {
        productKindMapper.deleteById(id);
    }

    @Override
    public void add(String name) {
        productKindMapper.add(name);
    }
}
