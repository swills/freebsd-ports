# $FreeBSD: head/devel/py-notify/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	notify
PORTVERSION=	0.1.1
DISTVERSIONPREFIX=python-
PORTREVISION=	11
CATEGORIES=	devel python
MASTER_SITES=	http://www.galago-project.org/files/releases/source/notify-python/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	python bindings for libnotify

OPTIONS_DEFINE=	DOCS

LIB_DEPENDS=	libnotify.so:devel/libnotify

USES=		gmake libtool:keepla pathfix pkgconfig python:2 tar:bzip2
USE_GNOME=	pygtk2
INSTALL_TARGET=	install-strip
GNU_CONFIGURE=	yes

DOCS=		AUTHORS COPYING ChangeLog NEWS

post-extract:
	@${RM} ${WRKSRC}/src/pynotify.c

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${DOCS}
	@${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
