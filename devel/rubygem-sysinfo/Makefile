# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-sysinfo/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	sysinfo
PORTVERSION=	0.8.1
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	All your system-independent infoz in one handy class

LICENSE=	MIT

RUN_DEPENDS=	rubygem-drydock>=0:devel/rubygem-drydock \
		rubygem-storable>=0:devel/rubygem-storable

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	bin/sysinfo

PLIST_FILES=	bin/sysinfo

.include <bsd.port.mk>
