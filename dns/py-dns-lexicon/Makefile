# Created by: Goran Mekić <meka@tilda.center>
# $FreeBSD: head/dns/py-dns-lexicon/Makefile 443913 2017-06-19 22:31:47Z dbaio $

PORTNAME=	dns-lexicon
PORTVERSION=	2.1.7
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
