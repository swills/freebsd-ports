# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/biology/pyfasta/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	pyfasta
PORTVERSION=	0.5.2
PORTREVISION=	2
CATEGORIES=	biology python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Fast, memory-efficient, pythonic access to fasta sequence files

LICENSE=	MIT

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
