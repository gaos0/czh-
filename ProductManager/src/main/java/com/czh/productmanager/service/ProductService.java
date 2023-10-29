package com.czh.productmanager.service;

import com.czh.productmanager.pojo.Product;

import java.util.List;

public interface ProductService {
    /**
     * 查询
     * @return
     */
    List<Product> list();

    /**
     * 删除
     * @param ids
     */
    void delete(Integer id);

    /**
     * 新增
     * @param product
     */
    void add(Product product);

    /**
     * 根据id查询
     * @param id
     * @return
     */
    List<Product> findByName(String productName);

    /**
     *
     * @param product
     */
    void update(Product product);
}
