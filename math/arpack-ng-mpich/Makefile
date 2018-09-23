# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: head/math/arpack-ng-mpich/Makefile 480395 2018-09-22 16:36:38Z yuri $

PORTNAME=	arpack-ng
PORTREVISION=	2
PKGNAMESUFFIX=	-mpich

COMMENT=	Revised Argand library for solving large-scale eigenvalue problems with MPI support

LIB_DEPENDS+=	libmpich.so:net/mpich

MASTERDIR=	${.CURDIR}/../../math/arpack-ng

MPICH_ARG=	--enable-mpi
CONFLICTS_INSTALL=	arpack-ng-3.*

PLIST_FILES+=	lib/libparpack.a \
		lib/libparpack.so \
		lib/libparpack.so.2 \
		lib/libparpack.so.2.0.0

.include "${MASTERDIR}/Makefile"
