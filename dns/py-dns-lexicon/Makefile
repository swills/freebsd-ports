# Created by: Goran Mekić <meka@tilda.center>
# $FreeBSD: head/dns/py-dns-lexicon/Makefile 457544 2017-12-29 22:03:19Z joneum $

PORTNAME=	dns-lexicon
DISTVERSION=	2.1.16
CATEGORIES=	dns python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	meka@tilda.center
COMMENT=	Manipulate DNS records on various DNS providers in a standardized way

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}future>=0.16:devel/py-future@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tldextract>=1.7.5:dns/py-tldextract@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.11:www/py-requests@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
