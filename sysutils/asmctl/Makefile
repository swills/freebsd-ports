# Created by: Yuichiro NAITO <naito.yuichiro@gmail.com>
# $FreeBSD: head/sysutils/asmctl/Makefile 488097 2018-12-22 15:53:06Z joneum $

PORTNAME=	asmctl
PORTVERSION=	1.7
CATEGORIES=	sysutils

MAINTAINER=	naito.yuichiro@gmail.com
COMMENT=	Apple System Management Controller

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	yuichiro-naito

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

post-install:
	${MV} ${STAGEDIR}${PREFIX}/etc/devd/asmctl.conf \
		${STAGEDIR}${PREFIX}/etc/devd/asmctl.conf.sample

.include <bsd.port.mk>
