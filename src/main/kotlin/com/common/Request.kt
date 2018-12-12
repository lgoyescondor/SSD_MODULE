package com.common

class Request(
    val id: Int,
    val from: String,
    val to: String,
    val status: Int,
    val idSupervisor: Int,
    val description: String,
    val type: Int,
    val creator: User
) {
}