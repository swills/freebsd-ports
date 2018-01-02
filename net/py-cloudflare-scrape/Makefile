# $FreeBSD: head/net/py-cloudflare-scrape/Makefile 457272 2017-12-26 10:21:18Z tcberner $

PORTNAME=	cloudflare-scrape
DISTVERSION=	1.9.1
CATEGORIES=	net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	tcberner@FreeBSD.org
COMMENT=	Python module to bypass Cloudflare's anti-bot page

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}PyExecJS>=0:devel/py-PyExecJS@${FLAVOR}

USES=		python
USE_PYTHON=     distutils autoplist

USE_GITHUB=     yes
GH_ACCOUNT=	Anorov

.include <bsd.port.mk>
