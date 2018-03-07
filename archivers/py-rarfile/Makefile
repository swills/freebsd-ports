# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: head/archivers/py-rarfile/Makefile 463766 2018-03-06 20:33:02Z sunpoet $

PORTNAME=	rarfile
PORTVERSION=	3.0
CATEGORIES=	archivers python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Python module for RAR archive reading

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	unrar:archivers/unrar

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
