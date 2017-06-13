# Created by: Michael L. Hostbaek <mich@freebsdcluster.org>
# $FreeBSD: head/net/wping/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	wping
PORTVERSION=	0.1a
PORTREVISION=	4
CATEGORIES=	net
MASTER_SITES=	http://freebsdcluster.org/~mich/software/

MAINTAINER=	mich@FreeBSD.org
COMMENT=	Web-based graphical ping log

RUN_DEPENDS=	p5-GD>=0:graphics/p5-GD \
		p5-Time-HiRes>=0:devel/p5-Time-HiRes

USES=		perl5 tar:bzip2 shebangfix
SHEBANG_FILES=	wping.pl
NO_BUILD=	yes

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/wping.pl ${STAGEDIR}${PREFIX}/bin/wping
	${INSTALL_DATA} ${WRKSRC}/wping.conf ${STAGEDIR}${PREFIX}/etc/wping.conf.sample

.include <bsd.port.mk>
