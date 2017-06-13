# Created by: Renaud Chaput <renchap@cocoa-x.com>
# $FreeBSD: head/security/rubygem-net-ssh-multi/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	net-ssh-multi
PORTVERSION=	1.2.1
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	renchap@cocoa-x.com
COMMENT=	SSH connection multiplexing library for Ruby

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-net-ssh>=2.6.5:security/rubygem-net-ssh \
		rubygem-net-ssh-gateway>=1.2.0:security/rubygem-net-ssh-gateway

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
