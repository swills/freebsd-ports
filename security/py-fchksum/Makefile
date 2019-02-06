# Created by: ijliao
# $FreeBSD: head/security/py-fchksum/Makefile 492170 2019-02-04 21:44:58Z rene $

PORTNAME=	fchksum
PORTVERSION=	1.7.1
CATEGORIES=	security python
MASTER_SITES=	http://code.fluffytapeworm.com/projects/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python module to find the checksum of files

LICENSE=	GPLv2

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/fchksum.so
USES=		python:2.7
USE_PYTHON=	distutils
PYDISTUTILS_PKGNAME=	python-fchksum

.include <bsd.port.mk>
