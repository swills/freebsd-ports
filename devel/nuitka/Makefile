# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/devel/nuitka/Makefile 479065 2018-09-05 23:55:55Z sunpoet $

PORTNAME=	nuitka
PORTVERSION=	0.5.32.8
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
