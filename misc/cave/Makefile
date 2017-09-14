# Created by: ijliao
# $FreeBSD: head/misc/cave/Makefile 449762 2017-09-13 09:01:51Z amdmi3 $

PORTNAME=	cave
PORTVERSION=	1.0b
CATEGORIES=	misc
MASTER_SITES=	SF/bjk/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Character Animation Viewer for Everyone

LICENSE=	GPLv2+

USES=		ncurses
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	LIBS="${LDFLAGS} -lncurses"
CPPFLAGS+=	-I${NCURSESINC} -I${LOCALBASE}/include

PLIST_FILES=	bin/${PORTNAME} \
		man/man1/cave.1.gz

post-patch:
	@${LN} -sf ${PORTNAME}.man ${WRKSRC}/doc/${PORTNAME}.1

.include <bsd.port.mk>
