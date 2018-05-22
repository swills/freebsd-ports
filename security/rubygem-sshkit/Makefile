# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/security/rubygem-sshkit/Makefile 470548 2018-05-21 15:00:50Z sunpoet $

PORTNAME=	sshkit
PORTVERSION=	1.16.1
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Toolkit for remotely running commands on groups of servers

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-net-scp>=1.1.2:security/rubygem-net-scp \
		rubygem-net-ssh>=2.8.0:security/rubygem-net-ssh

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
