# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/biology/pyfasta/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	pyfasta
PORTVERSION=	0.5.2
PORTREVISION=	3
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
