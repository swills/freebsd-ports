# Created by: Brooks Davis
# $FreeBSD: head/devel/lldb38/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	lldb
PORTVERSION=	3.8
PORTREVISION=	2
CATEGORIES=	devel
PKGNAMESUFFIX=	${LLVM_SUFFIX}

MAINTAINER=	brooks@FreeBSD.org
COMMENT=	LLVM Debugger (use devel/llvm${LLVM_SUFFIX})

RUN_DEPENDS+=	lldb${LLVM_SUFFIX}:devel/llvm${LLVM_SUFFIX}

LLVM_SUFFIX=	38

USES=		metaport compiler:c++11-lib

.include <bsd.port.pre.mk>

.if ${OPSYS} == "FreeBSD" && ${COMPILER_TYPE} != clang
IGNORE=	The devel/llvm${LLVM_SUFFIX} port does not build lldb on this platform
.endif

.include <bsd.port.post.mk>
