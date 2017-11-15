# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: head/devel/oniguruma/Makefile 454041 2017-11-12 13:59:15Z riggs $

PORTNAME=	oniguruma
PORTVERSION=	6.6.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel textproc
PKGNAMESUFFIX=	6

MAINTAINER=	rob@theseusnetworking.com
COMMENT=	BSDL Regular Expressions library compatible with POSIX/GNU/Perl

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		pathfix autoreconf libtool
USE_GITHUB=	yes
GH_ACCOUNT=	kkos

OPTIONS_DEFINE=	DOCS EXAMPLES

PATHFIX_MAKEFILEIN=	Makefile.am
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
TEST_TARGET=	test
TEST_WRKSRC=	${WRKSRC}/test

post-patch:
	@${REINPLACE_CMD} -e \
		'/^INCLUDES/s|$$(includedir)|| ; \
		 s|$$(<)|$$(@).in|' ${WRKSRC}/Makefile.am

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} HISTORY README ${STAGEDIR}${DOCSDIR})
	(cd ${WRKSRC}/doc && ${INSTALL_DATA} * ${STAGEDIR}${DOCSDIR})
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/sample && ${INSTALL_DATA} *.c ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
