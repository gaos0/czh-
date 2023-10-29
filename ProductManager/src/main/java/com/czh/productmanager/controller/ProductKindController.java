package com.czh.productmanager.controller;


import com.czh.productmanager.pojo.ProductKind;
import com.czh.productmanager.pojo.Result;
import com.czh.productmanager.service.ProductKIndService;
import com.czh.productmanager.service.ProductService;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@Slf4j
@RestController
public class ProductKindController {
    @Autowired
    private ProductKIndService productKIndService;


    @DeleteMapping("/kind/{id}")
    public Result delete(@PathVariable Integer id)
    {
        log.info("删除分类");
        productKIndService.delete(id);
        return  Result.success();
    }

    @RequestMapping("/kind")
    public Result list(){
        log.info("查询分类");
        List<ProductKind> kingList = productKIndService.list();
        return Result.success(kingList);
    }

    @GetMapping("/kind1")
    public Result addKind(String name)
    {
        log.info("新增分类",name);
        productKIndService.add(name);
        return Result.success();
    }
}
