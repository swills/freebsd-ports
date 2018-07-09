# $FreeBSD$

PORTNAME=	turbostat
PORTVERSION=	4.17 # Turbostat itself has a version, but we don't bother
PORTREVISION=   1
CATEGORIES=	sysutils
MASTER_SITES=	https://raw.githubusercontent.com/torvalds/linux/v${PORTVERSION}/tools/power/x86/turbostat/ \
		https://raw.githubusercontent.com/torvalds/linux/v${PORTVERSION}/arch/x86/include/asm/
DISTFILES=	${PORTNAME}.c ${PORTNAME}.8 msr-index.h intel-family.h
DIST_SUBDIR=	${PORTNAME}-${PORTVERSION}
EXTRACT_ONLY=	#empty

MAINTAINER=	bwidawsk@FreeBSD.org
COMMENT=	turbostat tool from Linux Kernel

LICENSE=	GPLv2

NO_WRKSUBDIR=yes

ONLY_FOR_ARCHS= amd64

PLIST_FILES=	bin/turbostat

post-extract:

do-extract:
	@${MKDIR} ${WRKSRC}
	${CP} ${_DISTDIR}/${PORTNAME}.c ${WRKSRC}
	${CP} ${_DISTDIR}/${PORTNAME}.8 ${WRKSRC}
	${CP} ${_DISTDIR}/msr-index.h ${WRKSRC}
	${CP} ${_DISTDIR}/intel-family.h ${WRKSRC}

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -DMSRHEADER='"msr-index.h"' -DINTEL_FAMILY_HEADER='"intel-family.h"' -o ${PORTNAME} ${PORTNAME}.c

.include <bsd.port.mk>
