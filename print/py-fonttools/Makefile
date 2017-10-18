# Created by: Joseph Koshy <jkoshy@FreeBSD.org>
# $FreeBSD: head/print/py-fonttools/Makefile 452293 2017-10-17 20:07:02Z sunpoet $

PORTNAME=	fonttools
PORTVERSION=	3.17.0
CATEGORIES=	print python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Open source library for manipulating fonts, written in Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES?=		python zip
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|share/man/man1|man/man1|g' ${WRKSRC}/setup.py

.include <bsd.port.mk>
