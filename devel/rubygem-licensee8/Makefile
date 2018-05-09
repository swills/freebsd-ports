# Created by: Brendan Molloy <brendan+freebsd@bbqsrc.net>
# $FreeBSD: head/devel/rubygem-licensee8/Makefile 469442 2018-05-09 10:43:26Z mfechner $

PORTNAME=	licensee
PORTVERSION=	8.7.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	8

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Detects under what license a project is distributed

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-rugged>=0.24:devel/rubygem-rugged

PORTSCOUT=	limit:^8\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/licensee

.include <bsd.port.mk>
