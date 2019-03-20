# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/textproc/itstool/Makefile 495018 2019-03-08 06:46:27Z antoine $
#   $MCom: ports/trunk/textproc/itstool/Makefile 19804 2014-08-13 14:55:11Z kwm $

PORTNAME=	itstool
PORTVERSION=	2.0.5
PORTREVISION=	2
CATEGORIES=	textproc
MASTER_SITES=	http://files.itstool.org/itstool/

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Make XML documents translatable through po files

LICENSE=	GPLv3

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/libxml2.py:textproc/py-libxml2@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/libxml2.py:textproc/py-libxml2@${PY_FLAVOR}

USES=		python tar:bzip2
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|@PYTHON@|${PYTHON_CMD}|g' \
		${WRKSRC}/itstool.in

.include <bsd.port.mk>
