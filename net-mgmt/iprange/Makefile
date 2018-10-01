# $FreeBSD: head/net-mgmt/iprange/Makefile 480814 2018-09-27 19:18:56Z garga $

PORTNAME=	iprange
PORTVERSION=	1.0.4
CATEGORIES=	net-mgmt
MASTER_SITES=	https://github.com/firehol/iprange/releases/download/v${PORTVERSION}/

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Manage IP ranges

LICENSE=	GPLv2+

USES=		tar:xz

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/iprange \
		man/man1/iprange.1.gz

.include <bsd.port.mk>
