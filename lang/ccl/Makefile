# $FreeBSD$

PORTNAME=	ccl
PORTVERSION=	1.12
PORTREVISION=	1
CATEGORIES=	lang lisp

USE_GITHUB=	nodefault
GH_ACCOUNT=	Clozure
GH_TAGNAME=	v${PORTVERSION}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:DEFAULT freebsdx86.tar.gz:bootstrap
DIST_SUBDIR=	${PORTNAME}/v${PORTVERSION}
MASTER_SITES+=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/releases/download/v${PORTVERSION}/:bootstrap
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Clozure CL is a free Common Lisp implementation

LICENSE=	LGPL21

ONLY_FOR_ARCHS=	amd64

CCL_DIRECTORY=	${PREFIX}/lib/ccl
CCL_PLIST=	${WRKDIR}/pkg-plist
# the following files will not be installed
EXCLUDE=	cocoa-ide lisp-kernel scripts

USE_ASDF=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"

.include <bsd.port.pre.mk>

.if ${ARCH} == "i386"
LISP_ARCH=	x8632
FX86CL=		fx86cl
EXCLUDE+=	fx86cl64 fx86cl64.image
.elif ${ARCH} == "amd64"
LISP_ARCH=	x8664
FX86CL=		fx86cl64
EXCLUDE+=	fx86cl fx86cl.image
.endif

SUB_LIST+=	FX86CL="${FX86CL}" CCL_DIRECTORY="${CCL_DIRECTORY}"
SUB_FILES=	ccl.sh

post-extract: .EXEC
	@cd ${WRKSRC} && ${EXTRACT_CMD} ${EXTRACT_BEFORE_ARGS} ${_DISTDIR}/freebsdx86.tar.gz

post-patch:
	@${SED}	-i '' -e 's|%%LOCALBASE%%|${LOCALBASE}|' ${WRKSRC}/tools/asdf.lisp
	@${SED}	-i '' -e 's|%%TAG%%|v${PORTVERSION}|' ${WRKSRC}/lisp-kernel/freebsdx86*/Makefile
	@${FIND} ${WRKSRC} -name .svn -or -name .cvsignore -or -name "*.orig" \
		| ${XARGS} ${RM} -r

do-build:
	@${RM} ${WRKSRC}/fx86cl ${WRKSRC}/fx86cl64
	@cd ${WRKSRC}/lisp-kernel/freebsd${LISP_ARCH} && ${MAKE} && ${RM} *.o
	@cd ${WRKSRC} && ${ECHO_CMD} | ${SETENV} -u CCL_DEFAULT_DIRECTORY ./${FX86CL} --no-init --batch --quiet \
		--eval "(ccl:rebuild-ccl :full t)" \
		--eval "(quit)"

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/ccl
	${CP} -r ${WRKSRC}/* ${STAGEDIR}${CCL_DIRECTORY}
	@for i in ${EXCLUDE}; do \
		${RM} -r ${STAGEDIR}${CCL_DIRECTORY}/$${i}; \
	done
	${INSTALL_SCRIPT} ${WRKDIR}/ccl.sh ${STAGEDIR}${PREFIX}/bin/ccl

post-install:
	@cd ${STAGEDIR}${PREFIX}; ${FIND} lib/ccl/* -type d -empty \
		| ${SORT} \
		| ${SED} -e 's#^#@dir #g' \
		> ${CCL_PLIST}
	@cd ${STAGEDIR}${PREFIX}; ${FIND} lib/ccl/* -type f -o -type l \
		| ${SORT} \
		>> ${CCL_PLIST}
	@${ECHO_CMD} "r ${TMPPLIST}"		> ${WRKDIR}/ex.script
	@${ECHO_CMD} "/start"			>> ${WRKDIR}/ex.script
	@${ECHO_CMD} "r ${CCL_PLIST}"		>> ${WRKDIR}/ex.script
	@${ECHO_CMD} "x!"			>> ${WRKDIR}/ex.script
	@cd ${WRKDIR} && ex < ex.script > /dev/null

.include <bsd.port.post.mk>
