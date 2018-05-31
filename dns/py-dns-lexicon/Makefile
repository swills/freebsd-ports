# Created by: Goran Mekić <meka@tilda.center>
# $FreeBSD: head/dns/py-dns-lexicon/Makefile 471004 2018-05-27 20:29:39Z krion $

PORTNAME=	dns-lexicon
DISTVERSION=	2.3.0
CATEGORIES=	dns python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	meka@tilda.center
COMMENT=	Manipulate DNS records on various DNS providers in a standardized way

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}future>0:devel/py-future@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tldextract>0:dns/py-tldextract@${FLAVOR}

USES=		python
USE_PYTHON=	distutils concurrent autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
