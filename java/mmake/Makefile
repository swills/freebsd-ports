# Created by: ijliao
# $FreeBSD: head/java/mmake/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	mmake
PORTVERSION=	2.3
PORTREVISION=	1
CATEGORIES=	java devel
MASTER_SITES=	http://www.tildeslash.com/mmake/dist/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Create a Makefile for Your Java files, ready to compile

BUILD_DEPENDS=	jikes:java/jikes
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 gmake
GNU_CONFIGURE=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/mmake man/man1/mmake.1.gz

post-patch:
	@${REINPLACE_CMD} -E 's,(BIN|MAN)DIR),DESTDIR)$$(&,' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
