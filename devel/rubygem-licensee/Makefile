# Created by: Brendan Molloy <brendan+freebsd@bbqsrc.net>
# $FreeBSD: head/devel/rubygem-licensee/Makefile 444549 2017-06-28 08:45:56Z tz $

PORTNAME=	licensee
PORTVERSION=	8.7.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	tz@FreeBSD.org
COMMENT=	Detects under what license a project is distributed

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-rugged>=0.24:devel/rubygem-rugged

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/licensee

.include <bsd.port.mk>
