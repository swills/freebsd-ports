# $FreeBSD$

PORTNAME=	kyua
PORTVERSION=	0.13
PORTREVISION=	4
PORTEPOCH=	3
CATEGORIES=	devel
MASTER_SITES=	https://github.com/jmmv/kyua/releases/download/${PORTNAME}-${PORTVERSION}/ \
		LOCAL/jmmv

MAINTAINER=	jmmv@FreeBSD.org
COMMENT=	Testing framework for infrastructure software

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	liblutok.so:devel/lutok libsqlite3.so:databases/sqlite3

USES=		lua pkgconfig

CONFLICTS=	kyua-atf-compat-[0-9]* kyua-cli-[0-9]* kyua-testers-[0-9]*

GNU_CONFIGURE=	yes
TESTS_USER=	tests
USERS=		${TESTS_USER}
SUB_FILES=	kyua.conf
SUB_LIST=	TESTS_USER=${TESTS_USER}

OPTIONS_DEFINE=	DOCS EXAMPLES TEST
OPTIONS_DEFAULT=TEST
OPTIONS_SUB=	yes

DOCS_VARS=		MAKE_FLAGS+=doc_DATA=
EXAMPLES_VARS=		MAKE_FLAGS+=dist_examples_DATA=
TEST_BUILD_DEPENDS=	atf>=0.21:devel/atf
TEST_CONFIGURE_WITH=	atf
TEST_RUN_DEPENDS=	atf>=0.21:devel/atf

CONFIGURE_ARGS=	--without-doxygen --docdir=${DOCSDIR}
MAKE_FLAGS+=	examplesdir=${EXAMPLESDIR} pkgdatadir=${DATADIR}

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/kyua/
	${INSTALL_DATA} ${WRKDIR}/kyua.conf ${STAGEDIR}${PREFIX}/etc/kyua/kyua.conf.sample
	${INSTALL_DATA} ${WRKSRC}/examples/Kyuafile.top ${STAGEDIR}${PREFIX}/tests/Kyuafile

.include <bsd.port.mk>
