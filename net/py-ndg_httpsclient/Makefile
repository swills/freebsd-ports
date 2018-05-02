# Created by: Olivier Duchateau
# $FreeBSD: head/net/py-ndg_httpsclient/Makefile 468456 2018-04-27 15:56:35Z sunpoet $

PORTNAME=	ndg_httpsclient
PORTVERSION=	0.5.0
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP/source/n/ndg-httpsclient
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Enhance HTTPS support for httplib and urllib2

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/ndg/httpsclient/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyasn1>=0.1.4:devel/py-pyasn1@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}openssl>=0.13:security/py-openssl@${FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
