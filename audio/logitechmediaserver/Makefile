# $FreeBSD$

PORTNAME=	logitechmediaserver
PORTVERSION=	7.9.2.g2019.11.28
CATEGORIES=	audio

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Audio streaming server that powers Squeezebox players from Logitech

LICENSE=	SDL
LICENSE_NAME=	Slim Devices License
LICENSE_FILE=	${WRKSRC}/License.txt
LICENSE_PERMS=	no-dist-mirror no-dist-sell no-pkg-mirror no-pkg-sell

ONLY_FOR_ARCHS=	amd64 i386

RUN_DEPENDS=	p5-IO-Socket-SSL>=2.066:security/p5-IO-Socket-SSL

BUILD_DEPENDS=	nasm:devel/nasm \
		bash:shells/bash \
		rsync:net/rsync
LIB_DEPENDS=	libgd.so:graphics/gd

USES=		autoreconf:build gettext-runtime gmake libtool:build perl5 shebangfix
USE_GITHUB=	yes
GH_TUPLE=	Logitech:slimserver:cae4414 \
		Logitech:slimserver-vendor:6265ea5:vendor \
		ralph-irving:faad2:4c01c9a:faad2
USE_RC_SUBR=	logitechmediaserver
SHEBANG_FILES=	Bin/darwin/check-update.pl \
		Bin/dbish \
		CPAN/Log/Log4perl/Layout/PatternLayout/Multiline.pm \
		Slim/Plugin/UPnP/t/MediaRenderer.t \
		Slim/Plugin/UPnP/t/MediaServer.t \
		cleanup.pl \
		gdresize.pl \
		gdresized.pl \
		lib/MPEG/Audio/Frame.pm \
		scanner.pl \
		slimserver.pl \
		${WRKSRC_vendor}/CPAN/hints/darwin.pl

# Defaults support playback of relativly unrestricted formats on SB2 or
# SB3 devices and wired SB1 devices.
OPTIONS_DEFINE=	APE FLAC LAME SOX TEST DOCS
OPTIONS_DEFAULT=FLAC SOX TEST
APE_DESC=	Support Monkey Audio input
FLAC_DESC=	Support FLAC transcoding
LAME_DESC=	Support MP3 transcoding
SOX_DESC=	Support OGG Vorbis input via SoX
APE_RUN_DEPENDS=	mac:audio/mac
FLAC_RUN_DEPENDS=	flac:audio/flac
LAME_RUN_DEPENDS=	lame:audio/lame
SOX_RUN_DEPENDS=	sox:audio/sox
TEST_VARS_OFF=		CONTRIB_FLAGS=-t

RESTRICTED=	Contains non-redistributable firmware, documentation, and images
USERS=		${SLIMUSER}
GROUPS=		${SLIMGROUP}
EXTRA_PATCHES=	${FILESDIR}/vendorpatch-CPAN_buildme.sh

DOCFILES=	Changelog*.html Installation.txt License*.txt

PLIST_SUB=	SLIMDIR=${SLIMDIR} \
		SLIMDBDIR=${SLIMDBDIR} \
		OPSYS=${OPSYS:tl} \
		ARCH=${ARCH} \
		ARCHNAME=${ARCHNAME}

SUB_FILES=	Custom.pm \
		logitechmediaserver.conf
SUB_LIST=	PERL=${PERL} \
		PORTNAME=${PORTNAME} \
		SITE_PERL=${PREFIX}/${SITE_PERL_REL} \
		SLIMDIR=${SLIMDIR} \
		SLIMDBDIR=${SLIMDBDIR} \
		SLIMUSER=${SLIMUSER} \
		SLIMGROUP=${SLIMGROUP} \
		CONFFILES="${CONFFILES}"

SLIMDIR?=	share/logitechmediaserver
SLIMDBDIR?=	/var/db/logitechmediaserver
SLIMUSER?=	slimserv
SLIMGROUP?=	${SLIMUSER}

.include <bsd.port.pre.mk>

.if ${ARCH} == "i386"
ARCHNAME=	i386-freebsd-thread-multi-64int
PLIST_SUB+=	I386_ONLY=""
.else
PLIST_SUB+=	I386_ONLY="@comment "
.endif

.if ${ARCH} == "amd64"
ARCHNAME=	amd64-freebsd-thread-multi
PLIST_SUB+=	AMD64_ONLY=""
.else
PLIST_SUB+=	AMD64_ONLY="@comment "
.endif

do-build:
	cd ${WRKSRC_vendor}/CPAN && ./buildme.sh ${CONTRIB_FLAGS}
	cd ${WRKSRC_faad2} && ./configure && make LDFLAGS=-static

do-install:
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/${SLIMDIR})
	${MKDIR} ${STAGEDIR}${PREFIX}/${SLIMDIR}/CPAN/arch/${PERL_VER}/${ARCHNAME}
	(cd ${WRKSRC_vendor}/CPAN/build/arch/${PERL_VER}/${ARCHNAME} && \
		${COPYTREE_SHARE} auto ${STAGEDIR}${PREFIX}/${SLIMDIR}/CPAN/arch/${PERL_VER}/${ARCHNAME})
	(cd ${STAGEDIR}${PREFIX}/${SLIMDIR} && \
		${FIND} . -name \*.orig -delete -o -name \*.bak -delete -o -name \*.packlist -delete && \
		${FIND} ./CPAN/arch/ ! -path './CPAN/arch/${PERL_VER}*' -delete && \
		${RM} -r -- Bin/* && \
		${RM} -- ${CONFFILES} ${DOCFILES})
	(cd ${STAGEDIR}${PREFIX}/${SLIMDIR}/CPAN/arch/${PERL_VER} && \
		${RM} -r -- arm-linux-gnueabihf-thread-multi-64int && \
		${RM} -r -- aarch64-linux-thread-multi && \
		${RM} -r -- i386-linux-thread-multi-64int && \
		${RM} -r -- x86_64-linux-thread-multi)

	${INSTALL_DATA} ${WRKDIR}/Custom.pm \
	    ${STAGEDIR}${PREFIX}/${SLIMDIR}/Slim/Utils/OS/Custom.pm
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/newsyslog.conf.d
	${INSTALL_DATA} ${WRKDIR}/logitechmediaserver.conf \
	    ${STAGEDIR}${PREFIX}/etc/newsyslog.conf.d/
	${INSTALL_SCRIPT} ${WRKSRC}/Bin/dbish ${STAGEDIR}${PREFIX}/${SLIMDIR}/Bin/
	${INSTALL_PROGRAM} ${WRKSRC_faad2}/frontend/faad ${STAGEDIR}${PREFIX}/${SLIMDIR}/Bin/
	@${LN} -s ${SLIMDBDIR}/cache ${STAGEDIR}${PREFIX}/${SLIMDIR}/Cache
do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${DOCFILES} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.post.mk>
