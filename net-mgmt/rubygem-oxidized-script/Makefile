# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: head/net-mgmt/rubygem-oxidized-script/Makefile 457709 2017-12-31 17:27:20Z swills $

PORTNAME=	oxidized-script
PORTVERSION=	0.5.0
CATEGORIES=	net-mgmt rubygems
MASTER_SITES=	RG

MAINTAINER=	nick@foobar.org
COMMENT=	CLI and Library to interface with network devices in rubygems-oxidized

LICENSE=	APACHE20

RUN_DEPENDS=	rubygem-oxidized>=0.15:net-mgmt/rubygem-oxidized \
		rubygem-slop3>=3.5:devel/rubygem-slop3

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/oxs

.include <bsd.port.mk>
