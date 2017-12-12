# Created by: Brendan Molloy <brendan+freebsd@bbqsrc.net>
# $FreeBSD: head/devel/rubygem-licensee/Makefile 455591 2017-12-05 16:44:09Z tz $

PORTNAME=	licensee
PORTVERSION=	8.7.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	idefix@fechner.net
COMMENT=	Detects under what license a project is distributed

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-rugged>=0.24:devel/rubygem-rugged

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/licensee

.include <bsd.port.mk>
