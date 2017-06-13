# $FreeBSD: head/databases/py-pypuppetdb03/Makefile 433271 2017-02-03 23:32:25Z romain $

PORTNAME=	pypuppetdb
PORTVERSION=	0.3.2
DISTVERSIONPREFIX=	v
CATEGORIES=	databases python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	03

MAINTAINER=	romain@FreeBSD.org
COMMENT=	Library to work with PuppetDB's REST API

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

CONFLICTS_INSTALL=	pypuppetdb-*
USE_GITHUB=	yes
GH_ACCOUNT=	voxpupuli

USES=	python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
