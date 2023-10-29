package com.czh.productmanager.controller;


import com.czh.productmanager.mapper.ProductMapper;
import com.czh.productmanager.pojo.Product;
import com.czh.productmanager.pojo.Result;
import com.czh.productmanager.service.ProductService;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@Slf4j
public class ProductController {

    @Autowired
    private ProductService productService;

    @RequestMapping("/product1")
    public Result list()
    {
        List<Product> productList = productService.list();
        return Result.success(productList);
    }

    @DeleteMapping("/delete/{id}")
    public Result delete(@PathVariable("id") Integer id)
    {
        productService.delete(id);
        return Result.success();
    }

    @PostMapping("/addproduct")
    public Result add(@RequestBody Product product)
    {
        productService.add(product);
        return Result.success();
    }

    @GetMapping("/product2")
    public Result findById(String productName){
        List<Product> productList = productService.findByName(productName);
        return Result.success(productList);
    }

    @PostMapping("/updateproduct")
    public Result update(@RequestBody Product product)
    {
        productService.update(product);
        return Result.success();
    }
}
