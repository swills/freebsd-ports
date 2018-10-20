# $FreeBSD: head/multimedia/bcmatroska2/Makefile 482343 2018-10-18 13:31:00Z tijl $

PORTNAME=	bcmatroska2
PORTVERSION=	0.23
CATEGORIES=	multimedia
MASTER_SITES=	https://www.linphone.org/releases/sources/bcmatroska2/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Belledonne Communications Matroska media container support

USES=		cmake:outsource
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DENABLE_STATIC=NO

.include <bsd.port.mk>
