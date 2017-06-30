# Created by: Goran Mekić <meka@tilda.center>
# $FreeBSD: head/dns/py-dns-lexicon/Makefile 444657 2017-06-29 18:16:25Z ultima $

PORTNAME=	dns-lexicon
PORTVERSION=	2.1.8
CATEGORIES=	dns python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	meka@tilda.center
COMMENT=	Manipulate DNS records on various DNS providers in a standardized way

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}future>=0.16:devel/py-future \
		${PYTHON_PKGNAMEPREFIX}tldextract>=1.7.5:dns/py-tldextract \
		${PYTHON_PKGNAMEPREFIX}requests>=2.11:www/py-requests

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
