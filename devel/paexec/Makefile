# Created by: chinsan
# $FreeBSD: head/devel/paexec/Makefile 493702 2019-02-23 16:28:35Z danilo $

PORTNAME=	paexec
PORTVERSION=	1.1.1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Parallel executor, distributes tasks over network

LICENSE=	MIT

BUILD_DEPENDS=	mkcmake:devel/mk-configure \
		runawk:lang/runawk

OPTIONS_DEFINE=	DOCS EXAMPLES

USES=		perl5
USE_PERL5=	build
MAKE_ENV=	SUBPRJ_DFLT="${SUBPRJ_DFLT}"

CFLAGS+=	-I${LOCALBASE}/include -Wno-error
LDFLAGS+=	-L${LOCALBASE}/lib

SUBPRJ_DFLT=	paexec paargs doc examples
MAKE_ENV+=	EGDIR="${STAGEDIR}${EXAMPLESDIR}" \
			DOCDIR="${STAGEDIR}${DOCSDIR}" \
			BINDIR="${STAGEDIR}${PREFIX}/bin" \
			MANDIR="${STAGEDIR}${MANPREFIX}/man" WARNERR="no"

do-build:
	@${SETENV} ${MAKE_ENV} ${LOCALBASE}/bin/mkcmake -C ${WRKSRC}

do-install:
	${SETENV} ${MAKE_ENV} ${LOCALBASE}/bin/mkcmake -C ${WRKSRC} \
		${INSTALL_TARGET}
	${INSTALL_DATA} ${WRKSRC}/presentation/${PORTNAME}.pdf ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
