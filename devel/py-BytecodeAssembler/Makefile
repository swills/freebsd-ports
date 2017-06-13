# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-BytecodeAssembler/Makefile 434846 2017-02-26 02:57:48Z vanilla $

PORTNAME=	BytecodeAssembler
PORTVERSION=	0.6.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generate Python code objects by "assembling" bytecode

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}DecoratorTools>=1.7:devel/py-decoratortools \
		${PYTHON_PKGNAMEPREFIX}SymbolType>0:devel/py-SymbolType
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
