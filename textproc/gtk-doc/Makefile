# Created by: fenner
# $FreeBSD$

PORTNAME=	gtk-doc
PORTVERSION=	1.29
CATEGORIES=	textproc
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Code documentation system, originally for GTK+

BUILD_DEPENDS=	jade:textproc/jade \
		itstool:textproc/itstool \
		highlight:textproc/highlight \
		docbook-xml>0:textproc/docbook-xml \
		${LOCALBASE}/share/xsl/docbook/xhtml/chunk.xsl:textproc/docbook-xsl \
		rarian-sk-config:textproc/rarian
RUN_DEPENDS=	jade:textproc/jade \
		docbook-xml>0:textproc/docbook-xml \
		highlight:textproc/highlight \
		${LOCALBASE}/share/xsl/docbook/xhtml/chunk.xsl:textproc/docbook-xsl \
		rarian-sk-config:textproc/rarian

USES=		gettext-tools gmake gnome pathfix perl5 pkgconfig \
		python:3.4+ tar:xz
USE_GNOME=	gnomeprefix libxslt

DOCBOOK_VERSION=	4.1.2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-highlight=highlight \
	--with-xml-catalog=${LOCALBASE}/share/xml/catalog.ports

post-install:
	${PYTHON_CMD} ${PYTHON_LIBDIR}/compileall.py \
		-f -d ${DATADIR}/python/gtkdoc \
		${STAGEDIR}${DATADIR}/python/gtkdoc
	${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py \
		-f -d ${DATADIR}/python/gtkdoc \
		${STAGEDIR}${DATADIR}/python/gtkdoc

.include <bsd.port.mk>
