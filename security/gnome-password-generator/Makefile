# Created by: Sergey Akifyev <asa@gascom.ru>
# $FreeBSD: head/security/gnome-password-generator/Makefile 465584 2018-03-26 12:38:56Z bapt $

PORTNAME=	gnome-password-generator
PORTVERSION=	1.6
PORTREVISION=	6
CATEGORIES=	security gnome python
MASTER_SITES=	SF/gnome-password/Gnome%20Password%20Generator/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNOME 2 password generator

USE_GNOME=	pygnome2
USES=		python:2.7

do-build:
	@cd ${WRKSRC} && ${SED} -e 's|/usr/bin/python|${PYTHON_CMD}|g ; \
		 s|/usr/share|${PREFIX}/share|g' ${PORTNAME}.py > ${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/*.png ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${WRKSRC}/*.desktop ${STAGEDIR}${PREFIX}/share/applications

.include <bsd.port.mk>
