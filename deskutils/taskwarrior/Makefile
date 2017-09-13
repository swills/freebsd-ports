# Created by: gahr
# $FreeBSD: head/deskutils/taskwarrior/Makefile 449591 2017-09-10 20:55:38Z gerald $

PORTNAME=	taskwarrior
PORTVERSION=	2.5.1
PORTREVISION=	2
CATEGORIES=	deskutils

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Feature-rich command-line todo list manager

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgnutls.so:security/gnutls
TEST_DEPENDS=	faketime:devel/libfaketime

USES=		compiler:c++11-lib cmake python:test shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	taskwarrior
GH_PROJECT=	task

CMAKE_ARGS+=	-DTASK_DOCDIR:STRING=${DATADIR:S/${PREFIX}\///} \
		-DTASK_MAN1DIR:STRING=man/man1 \
		-DTASK_MAN5DIR:STRING=man/man5

SHEBANG_FILES=	scripts/*/*.pl \
		doc/rc/refresh \

do-test:
	@cd ${WRKSRC}/test && \
	${PYTHON_CMD} run_all --verbose && \
	${PYTHON_CMD} problems

.include <bsd.port.mk>
