# $FreeBSD: head/devel/py-ipdb/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	ipdb
PORTVERSION=	0.11
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	IPython-enabled pdb

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ipython>=0.10.2:devel/ipython@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

post-patch:
	@${REINPLACE_CMD} -e '/zip_safe=/ s|True|False|' ${WRKSRC}/setup.py

.include <bsd.port.mk>
