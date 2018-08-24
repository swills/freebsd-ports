# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/devel/nuitka/Makefile 477463 2018-08-18 00:14:18Z sunpoet $

PORTNAME=	nuitka
PORTVERSION=	0.5.32.5
CATEGORIES=	devel python
MASTER_SITES=	https://nuitka.net/releases/
DISTNAME=	Nuitka-${PORTVERSION}
PKGNAMESUFFIX=	${PYTHON_PKGNAMESUFFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Compatible and efficient Python compiler

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		python tar:bzip2
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
