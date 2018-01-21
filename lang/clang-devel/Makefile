# Created by: Brooks Davis
# $FreeBSD: head/lang/clang-devel/Makefile 459483 2018-01-19 23:30:47Z brooks $

PORTNAME=	clang
PORTVERSION=	${LLVM_MAJOR}.d${SNAPDATE}
PORTREVISION=	0
CATEGORIES=	lang devel
PKGNAMESUFFIX=	-devel

MAINTAINER=	brooks@FreeBSD.org
COMMENT=	C, Objective-C, and C++ compiler (use devel/llvm${LLVM_SUFFIX})

RUN_DEPENDS+=	clang${LLVM_SUFFIX}:devel/llvm-devel

LLVM_SUFFIX=	-devel

USES=		metaport

.include "${.CURDIR}/../../devel/llvm-devel/Makefile.snapshot"

.include <bsd.port.mk>
