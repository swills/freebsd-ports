# Created by: Yuichiro NAITO <naito.yuichiro@gmail.com>
# $FreeBSD: head/sysutils/rubygem-specinfra/Makefile 458530 2018-01-09 14:28:10Z swills $

PORTNAME=	specinfra
PORTVERSION=	2.73.0
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
