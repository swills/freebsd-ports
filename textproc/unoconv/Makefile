# Created by: Rusmir Dusko <nemysis@FreeBSD.org>
# $FreeBSD$

PORTNAME=	unoconv
PORTVERSION=	0.8.2
CATEGORIES=	textproc python
MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert any document from and to any LibreOffice supported format

LICENSE=	GPLv2

RUN_DEPENDS=	xsltproc:textproc/libxslt

USES=		python
USE_GITHUB=	yes
NO_BUILD=	yes

PORTDOCS=	*

DOCSRCDIR1=	${WRKSRC}
DOC_FILES1=	AUTHORS ChangeLog README.adoc

DOCSRCDIR2=	${WRKSRC}/doc
DOCSDIR2=	${DOCSDIR}/doc
DOC_FILES2=	errcode.adoc filters.adoc formats.adoc office-installations.adoc \
		selinux.adoc unoconv.1.adoc

OPTIONS_DEFINE=	DOCS

SUB_FILES=	${PORTNAME} pkg-message

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/bin/env python|${PYTHON_CMD}|' \
		${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/

	@${MKDIR} ${STAGEDIR}${DATADIR}/tests/
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${DATADIR}

.for f in *.odt *.csv
	@(cd ${WRKSRC}/tests && ${INSTALL_DATA} ${f} ${STAGEDIR}${DATADIR}/tests)
.endfor

	${INSTALL_MAN} ${WRKSRC}/doc/${PORTNAME}.1 \
		${STAGEDIR}${MAN1PREFIX}/man/man1/

	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DOC_FILES1:S|^|${DOCSRCDIR1}/|} ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR2}
	${INSTALL_DATA} ${DOC_FILES2:S|^|${DOCSRCDIR2}/|} ${STAGEDIR}${DOCSDIR2}

.include <bsd.port.mk>
