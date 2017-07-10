# Created by: Yuichiro NAITO <naito.yuichiro@gmail.com>
# $FreeBSD: head/sysutils/rubygem-specinfra/Makefile 445295 2017-07-08 02:47:08Z swills $

PORTNAME=	specinfra
PORTVERSION=	2.68.0
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	naito.yuichiro@gmail.com
COMMENT=	Test suite for server configuration

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-net-scp>=0:security/rubygem-net-scp \
		rubygem-net-ssh>=2.7:security/rubygem-net-ssh \
		rubygem-net-telnet>=0:security/rubygem-net-telnet

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
