# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/sysutils/rubygem-rubyipmi/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	rubyipmi
PORTVERSION=	0.10.0
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Command line wrapper for ipmitool and freeipmi

LICENSE=	LGPL21

RUN_DEPENDS=	${LOCALBASE}/sbin/bmc-device:sysutils/freeipmi

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
