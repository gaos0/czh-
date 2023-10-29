package com.czh.productmanager.service;

import com.czh.productmanager.pojo.ProductKind;

import java.util.List;

public interface ProductKIndService {

    /**
     * 查询所有类型
     * @return 类型集合
     */
    List<ProductKind> list();

    /**
     * 根据id删除分类
     * @param id
     */
    void delete(Integer id);

    /**
     * 新增分类
     * @param name
     */
    void add(String name);
}
