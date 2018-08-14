# $FreeBSD: head/security/rubygem-recog/Makefile 476875 2018-08-11 11:39:38Z antoine $

PORTNAME=	recog
PORTVERSION=	2.1.20
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Framework for fingerprinting products

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	rubygem-nokogiri>=0:textproc/rubygem-nokogiri

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes
PLIST_FILES=	bin/recog_export \
		bin/recog_match \
		bin/recog_verify

.include <bsd.port.mk>
