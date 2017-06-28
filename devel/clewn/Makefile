# Created by: Giacomo Mariani <giacomomariani_at_yahoo_dot_it>
# $FreeBSD: head/devel/clewn/Makefile 444463 2017-06-27 13:46:53Z sunpoet $

PORTNAME=	clewn
PORTVERSION=	1.14
PORTREVISION=	2
CATEGORIES=	devel editors
MASTER_SITES=	SF/${PORTNAME}/OldFiles/${PORTNAME}-${PORTVERSION}/

MAINTAINER=	giacomomariani@yahoo.it
COMMENT=	Clewn provides Gdb support within Vim

RUN_DEPENDS=	vim:editors/vim

USES=		gmake ncurses readline
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	vimdir=${PREFIX}/share/vim/vimfiles

post-patch:
	${REINPLACE_CMD} -e 's|-lcurses|-lncurses|' ${WRKSRC}/configure

.include <bsd.port.mk>
